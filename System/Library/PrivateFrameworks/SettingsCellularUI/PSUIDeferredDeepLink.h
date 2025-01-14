//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PSUIDeferredDeepLink : NSObject
{
    NSString *_specifierID;	// 8 = 0x8
    NSDictionary *_resourceDictionary;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007b20c
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSDictionary *resourceDictionary; // @synthesize resourceDictionary=_resourceDictionary;
@property(retain, nonatomic) NSString *specifierID; // @synthesize specifierID=_specifierID;
- (id)initWithSpecifierID:(id)arg1 resourceDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007b0f9

@end

