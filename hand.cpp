+#include<iostream>
+#include"hand.h"
+
+Hand::Hand(){}
+Hand:: ~Hand(){
+	for(auto it = bones.begin(); it != bones.end(); it++){
+		delete *it;
+	}
+}
+
+void Hand::addBone(Bone * bone){
+	bones.push_back(bone);
+}
+
+bool Hand::removeBone(int pos, Bone*& abone){
+	if(pos < || pos >= bone.size())
+		return false;
+	abone = bones.at(pos);
+	bones.erase(bones.begin + pos);
+	return true;
+
+}
+Void print() const {
+	for(auto it = bones.cbegin(); it != bones.cend(); it++){
+		(*it)->print();
+		cout << " ";
+	}
+	cout << endl << endl;
+}
