#
# Makefile
#

# fichiers utilisés pour le test dans la console et la documentation
TEST   = Console.cpp Profil.cpp GestionnaireProfil.cpp Application.cpp GestionnairePaquet.cpp Paquet.cpp
FILES  = Profil.hpp GestionnaireProfil.hpp Application.hpp GestionnairePaquet.hpp Paquet.hpp $(TEST)
DOX_FL = Doxyfile
DOC_FL = $(FILES)  $(DOX_FL)

# pour compiler le test des wraps dans la console
verif: 	$(FILES)
	g++ -Wall -ansi -o $@ $(TEST) #-D VERB_DESTR

# pour générer la documentation
doc:	$(DOC_FL)
	doxygen $(DOX_FL)

clean:	clean_doc
	\rm -f *~ *.o verif

clean_doc:
	\rm -Rf html/*

dist:	clean clean_doc
	tar -jcf ../pizza.tbz $(DOC_FL) html text.make lisez_moi.txt
