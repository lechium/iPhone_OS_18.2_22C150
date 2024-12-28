//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject
{
    long long _artworkType;	// 8 = 0x8
    NSString *_availableArtworkToken;	// 16 = 0x10
    NSString *_fetchableArtworkToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002e952f
@property(readonly, nonatomic) NSString *fetchableArtworkToken; // @synthesize fetchableArtworkToken=_fetchableArtworkToken;
@property(readonly, nonatomic) NSString *availableArtworkToken; // @synthesize availableArtworkToken=_availableArtworkToken;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
- (id)stringRepresentation;	// IMP=0x00000000002e9481
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e9476
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e920c
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithArtworkType:(long long)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3;	// IMP=0x00000000002e843a
- (id)init;	// IMP=0x00000000002e8421

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
