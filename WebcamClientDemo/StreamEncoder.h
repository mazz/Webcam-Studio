//
//  StreamEncoder.h
//  WebcamClientDemo
//
//  Copyright © 2019 All rights reserved.
//

#ifndef StreamEncoder_h
#define StreamEncoder_h

#import <Foundation/Foundation.h>

@interface StreamEncoder: NSObject

- (int) encodeFile:(NSURL *)path;

@end


#endif /* StreamEncoder_h */
