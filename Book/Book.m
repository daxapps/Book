//
//  Book.m
//  Book
//
//  Created by Jason Crawford on 12/20/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import "Book.h"

@implementation Book

-(instancetype)initWithTitle:(NSString*)title
                      author:(Person*)author
                        year:(int)year {
    self = [super init];
    if(self) {
        _title = title;
        _author = author;
        _yearOfPublication = year;
    }
    
    return self;
}

@end
