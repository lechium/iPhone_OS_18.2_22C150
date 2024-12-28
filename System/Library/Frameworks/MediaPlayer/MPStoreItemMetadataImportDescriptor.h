//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICUserIdentity, NSDictionary;

__attribute__((visibility("hidden")))
@interface MPStoreItemMetadataImportDescriptor : NSObject
{
    NSDictionary *_platformDictionary;	// 8 = 0x8
    ICUserIdentity *_userIdentity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002575dd
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) NSDictionary *platformDictionary; // @synthesize platformDictionary=_platformDictionary;
- (id)initWithPayload:(id)arg1 userIdentity:(id)arg2;	// IMP=0x0000000000257530

@end
