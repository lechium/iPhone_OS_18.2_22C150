//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8coreidvd23DIDocUploadSessionProxy : NSObject
{
    MISSING_TYPE *jetsamTransaction;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *docUploadHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000000b1970
- (id)init;	// IMP=0x00100000000b2440
- (void)cancelUploads;	// IMP=0x00100000000b1ff0
- (void)uploadDocData:(id)arg1 uploadSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b1be0
- (void)dealloc;	// IMP=0x00100000000b1950

@end

