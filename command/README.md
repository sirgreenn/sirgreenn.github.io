bandit0: Με την εντολή ssh και τον κωδικό που μου δίνει συνδέθηκα κατευθείαν.

bandit1: Με την εντολή ls βρήκα το readme και μετα cat για να μου εμφανιστεί ο κωδικος NH2SXQwcBdpmTEzi3bvBHMM9H66vVXjL

bandit2: Παρόμοια διαδικασία με το bandit1 απλά στο cat επειδή το όνομα του αρχείου ειναι '-' έγραψα 'cat ./-' για να βγεί ο κωδικός rRGizSaX8Mk1RTb1CNQoXTcYZWU6lgzi

bandit3: Με την εντολή ls μας εμφανίζεται spaces in this filename, οπότε σκέφτηκα να κανω cat spaces\ in\ this\ filename όπου και μου εμφανίστηκε ο κωδικός aBZ0W5EmUfAf7kHTQeOwd8bauFJ2lAiG

bandit4: έκανα ls και εμφανίστηκε το inhere, μετα εκανα cd inhere και παλι ls όπου και βγηκε το αρχείο .hidden οποτε εκανα cat ./.hidden και βγήκε ο κωδικος 2EW7BBsr6aMMoJ2HjW067dm8EgX26xNe

bandit5: Με την εντολη ls βγηκε το inhere οπου και εκανα cd και παλι ls και βγηκαν τα αρχεια -file00 εως -file09, εκανα cat ./-file00 εως και το file07 οπου ειχε τον κωδικο lrIWWI6bB37kxfiCQZqUdOIYfr6eEeqR

bandit6: Εντολή find -readable -size 1033c, βρηκα κατευθειαν οτι ειναι το .file2 οποτε μετα εκανα cd inhere cd maybehere07 και cat ./.file2 και πηρα τον κωδικο P4L4vucdmLnm8I7Vl7jG1ApGSfjYKqJU

bandit7: Απο την στιγμη που λεει οτι βρισκεται καπου στον σερβερ εγραψα find / -user bandit07 -group bandit6 -size 33c . Μετα εψαξα οτι βγηκε και βρηκα το /var/lib/dpkg/info/bandit7.password το οποιο εκανα cat και βγηκε ο κωδικος z7WtoNQU2XfjmMtWA8u5rN4vzqu4v99S

bandit8: Κανοντας ls μας εμφανιζεται το αρχειο data.txt, οταν το εκανα cat εμφανιστηκαν πολλα strings, οποτε εκανα cat data.txt | grep "millionth" ωστε να βρει το string με αυτην την λεξη μεσα, διπλα ηταν ο κωδικος TESKZC0XvTetK0S9xNwm25STk5iWrBvP

bandit09: Παρομοιως συλλογισμος με το bandit8, εκανα ls βγηκε το αρχειο data.txt το οποιο οταν εκανα cat βγηκαν πολλα strings. οποτε επειτα εκανα cat data.txt | sort | uniq -c για να μετρησει ποσες φορες εχει εμφανιστει καθε string μιας και θελουμε ενα string που εμφανιζεται μια φορα. (Στην αρχη το δοκιμασα με cat data.txt | uniq -c αλλα δεν λειτουργησε.) Οταν εμφανιστηκαν τα strings βρηκα τον κωδικο διπλα απο το string με τον αριθμο 1, δηλαδη αυτος που εμφανιστηκε μια φορα. EN632PlfYiZbn3PhVK3XOGSlNInNE00t

bandit10: Αρχικα εκανα cat data.txt το οποιο δεν λειτουργησε. Οποτε χρησιμοποιησα την εντελη strings data.txt | grep = , ωστε να μου δειξει τα human readable strings τα οποια εχουν το =, ετσι βρηκα τον κωδικο G7w8LIi6J3kTb8A7j9LgrywtEUlyyp6s

bandit11: Αυτο ηταν αρκετα απλο, εκανα cat data.txt | base64 -d ( για να το κανει decode) οπου και μου βγηκε ο κωδικος 6zPeziLdR2RKNdNYFNb6nVCKzphlXHBM
