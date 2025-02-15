//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODataURLSessionTask, NSString;

@interface GEOWiFiQualityTileRequester : NSObject
{
    NSString *_tileKey;	// 8 = 0x8
    NSString *_eTag;	// 16 = 0x10
    id _auditToken;	// 24 = 0x18
    GEODataURLSessionTask *_task;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
}

+ (CDStruct_026435ec)requestKind;	// IMP=0x0020000000033cf0
- (void).cxx_destruct;	// IMP=0x00200000000344b3
- (void)cancel;	// IMP=0x0010000000034481
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;	// IMP=0x00100000000341fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

