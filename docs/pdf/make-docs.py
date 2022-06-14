from markdown import markdown
from os import path
from glob import glob
from weasyprint import HTML
from markdown.extensions.toc import TocExtension
import subprocess

# Read files content
dir = path.dirname(path.realpath(__file__))
filenames = [dir + '/front.md']
filenames += sorted(glob(dir + '/../*.md'),
                    key=lambda s: (int(s.split('\\')[-1].split(' ')[0])))
files_content = ["".join(open(fname, encoding='utf-8')) for fname in filenames]

# Generate zhaba-script.pdf
md = '\n<div style="page-break-after: always;"></div>\n'.join(files_content)
html = markdown(md, extensions=['fenced_code',
                                'tables', TocExtension(title='Contents')])

html = f"""<!DOCTYPE html>
  <html>
    <head>
      <meta charset="utf-8">
      <style>{open(dir + '/index.css').read()}</style>
    </head>
  <body>
    <div class="markdown-body">
      {html}
    </div>
  </body>
</html>
"""
open(dir + '/../zhaba-script.pdf', 'wb').write(HTML(string=html).write_pdf())

# Generate README.MD
open(dir + '/../../README.md', 'w',
     encoding='utf-8').write('\n'.join(files_content[1:]))
