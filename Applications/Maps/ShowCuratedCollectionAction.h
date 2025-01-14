//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ShowCuratedCollectionAction
{
    int _resultProviderID;	// 8 = 0x8
    unsigned long long _curatedCollectionMUID;	// 16 = 0x10
}

@property(readonly, nonatomic) int resultProviderID; // @synthesize resultProviderID=_resultProviderID;
@property(readonly, nonatomic) unsigned long long curatedCollectionMUID; // @synthesize curatedCollectionMUID=_curatedCollectionMUID;
- (int)analyticsLaunchActionType;	// IMP=0x00100000009f3809
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x00100000009f3801
- (_Bool)isCompatibleWithNavigation;	// IMP=0x00100000009f37f9
- (id)initWithCuratedCollectionID:(unsigned long long)arg1 resultProviderID:(int)arg2;	// IMP=0x00100000009f37a5

@end

