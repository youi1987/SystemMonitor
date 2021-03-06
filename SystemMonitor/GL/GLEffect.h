//
//  GLEffect.h
//  System Monitor
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.
//
//  Copyright (c) 2013 Arvydas Sidorenko
//

#import <Foundation/Foundation.h>

@protocol GLEffectProtected
- (BOOL)compileShader:(GLuint*)shader filename:(NSString*)filename type:(GLenum)type;
- (BOOL)linkProgram:(GLuint)program;
- (BOOL)validateProgram:(GLuint)program;
@end

@interface GLEffect : NSObject <GLEffectProtected>
@end
