rm opencv_arwan_book.aux
rm opencv_arwan_book.bbl
rm opencv_arwan_book.bcf
rm opencv_arwan_book.blg
rm opencv_arwan_book.lof
rm opencv_arwan_book.log
rm opencv_arwan_book.lot
rm opencv_arwan_book.out
rm opencv_arwan_book.pdf
rm opencv_arwan_book.run.xml
rm opencv_arwan_book.synctex.gz
rm opencv_arwan_book.toc

git init
git add . -A
git commit -m "$1"
git push origin master
