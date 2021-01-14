// import { writeFile } from 'fs'
// let string = ''

// for (let i = 0; i < 13; i++) {
//     for (let j = 0; j < 4; j++) {
//         string += `(${i},${j})`
//     }
// }

// writeFile('input.txt', string, () => {
// })

let string = '{'
for (let i = 0; i < 20; i++) {
    string += Math.round(Math.random()) + ','
}
string += '}'
console.log(string)