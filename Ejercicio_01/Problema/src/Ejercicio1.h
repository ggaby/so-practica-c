/*
* Copyright (C) 2012 Sistemas Operativos - UTN FRBA. All rights reserved.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef EJERCICIO1_H_
#define EJERCICIO1_H_


/*
*   Retorna un String nuevo que es la concatenación
*   de los dos Strings pasados por parámetro
*   Ejemplo:
*   char* nombre = "Ritchie";
*   char* saludo = string_concat("Hola ", nombre);
*   =>
*   saludo = "Hola Ritchie"
*/
char* string_concat(const char*, const char*);


/*
*   Asigna en el tercer parámetro, la concatenación
*   de los primeros dos Strings
*   Ejemplo:
*   char* nombre = "Ritchie";
*   char* saludo;
*   string_concat("Hola ", nombre, &saludo);
*   =>
*   saludo = "Hola Ritchie"
*/
void string_concat_dinamyc(const char*, const char*, char**);


/*
*   Separa el mail en un usuario y un dominio.
*   Ejemplo:
*   char* mail = "ritchie@ansic.com.ar";
*   char* user, dominio;
*   mail_split(mail, &user, &dominio);
*   =>
*   user = "ritchie"
*   dominio = "ansic.com.ar"
*/
void mail_split(const char* mail, char** user, char** dominio);


#endif /* EJERCICIO1_H_ */
