//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUMediaProvider;

__attribute__((visibility("hidden")))
@interface PUJoiningMediaProviderPredicateRecord : NSObject
{
    PUMediaProvider *_mediaProvider;	// 8 = 0x8
    CDUnknownBlockType _predicate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000036d277
@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (id)initWithMediaProvider:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x000000000036d0ce

@end

