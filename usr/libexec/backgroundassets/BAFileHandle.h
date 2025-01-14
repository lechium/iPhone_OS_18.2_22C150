//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface BAFileHandle : NSObject
{
    NSFileHandle *_handle;	// 8 = 0x8
    NSString *_filePath;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000001b8cc
- (void).cxx_destruct;	// IMP=0x002000000001b90a
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSFileHandle *handle; // @synthesize handle=_handle;
- (id)initWithFileDescriptor:(int)arg1 originalPath:(id)arg2 closeOnDealloc:(_Bool)arg3;	// IMP=0x001000000001b820

@end

