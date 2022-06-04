from markdown import markdown
from os import path
from glob import glob
from weasyprint import HTML

dir = path.dirname(path.realpath(__file__))

filenames = sorted(glob(dir + '/../*.md'),
                   key=lambda s: (int(s.split('\\')[-1].split(' ')[0])))

md = "".join(["".join(open(fname, encoding='utf-8')) +
             '<div style="page-break-after: always;"></div>' for fname in filenames])

html = f"""<!DOCTYPE html>
  <html>
    <head>
      <meta charset="utf-8">
      <style>{open(dir + '/index.css').read()}</style>
    </head>
  <body>
    <div class="markdown-body">
      {markdown(md, extensions=['fenced_code', 'tables'])}
    </div>
  </body>
</html>
"""

# open(dir + '/merged.html', 'w', encoding='utf-8').write(html)
open(dir + '/merged.pdf', 'wb').write(HTML(string=html).write_pdf())
