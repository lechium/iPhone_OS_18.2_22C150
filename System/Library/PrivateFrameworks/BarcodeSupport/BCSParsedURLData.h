//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BCSParsedURLData : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_extraPreviewText;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSString *_preferredBundleID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001bdf8
- (void).cxx_destruct;	// IMP=0x000000000001be28
@property(readonly, nonatomic) NSString *preferredBundleID; // @synthesize preferredBundleID=_preferredBundleID;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *extraPreviewText; // @synthesize extraPreviewText=_extraPreviewText;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001bd5f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001bc14
- (id)initWithURL:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3 preferredBundleID:(id)arg4;	// IMP=0x000000000001bb00
- (id)initWithURL:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3;	// IMP=0x000000000001baeb
- (id)initWithURL:(id)arg1 type:(long long)arg2;	// IMP=0x000000000001bad6
- (id)initWithURL:(id)arg1;	// IMP=0x000000000001babf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
