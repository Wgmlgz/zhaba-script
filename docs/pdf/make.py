from markdown import markdown
from os import path
from glob import glob
from weasyprint import HTML
from markdown.extensions.toc import TocExtension

dir = path.dirname(path.realpath(__file__))

filenames = [dir + '/front.md']
filenames += sorted(glob(dir + '/../*.md'),
                   key=lambda s: (int(s.split('\\')[-1].split(' ')[0])))
str = "".join(["".join(open(fname, encoding='utf-8')) +
               '<div style="page-break-after: always;"></div>' for fname in filenames])
md = markdown(str, extensions=['fenced_code',
              'tables', TocExtension(title='Contents')])

html = f"""<!DOCTYPE html>
  <html>
    <head>
      <meta charset="utf-8">
      <style>{open(dir + '/index.css').read()}</style>
    </head>
  <body>
    <div class="markdown-body">
      {md}
    </div>
  </body>
</html>
"""

open(dir + '/merged.html', 'w', encoding='utf-8').write(html)
open(dir + '/merged.pdf', 'wb').write(HTML(string=html).write_pdf())
