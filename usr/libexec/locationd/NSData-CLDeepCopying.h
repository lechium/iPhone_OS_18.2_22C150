//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (CLDeepCopying)
- (id)cl_deepCopy;	// IMP=0x002000000090b76a
- (id)cl_hexadecimalString;	// IMP=0x001000000099f6a8
- (id)_cl_initWithFileDescriptor:(int)arg1;	// IMP=0x0010000000c652d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

