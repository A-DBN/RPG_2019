pipeline {
    agent {
        docker { image 'epitechcontent/epitest-docker' }
    }
    stages {
        stage('Testing repository size') {
            steps {
                sh '''#!/bin/sh
                    repo_size=$(du -s | sed 's/\\s.*$//')

                    #30 MB = 30*1024 = 30720KB = 31457280B
                    if [ "$repo_size" -gt 30719 ]; then
                        echo "The folder is greater than the 30MB allowed. Please fix this or the project won't be corrected."
                        exit 1
                    fi
                    echo "The repository size is OK. ($repo_size KB)"
                '''
            }
        }
        stage('Testing if the project can compile') {
            steps {
                sh 'make'
            }
        }
    }
}