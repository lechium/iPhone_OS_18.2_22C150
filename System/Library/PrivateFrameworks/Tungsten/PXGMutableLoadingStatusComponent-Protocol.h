//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@protocol PXGMutableLoadingStatusComponent
@property(readonly, nonatomic) CDStruct_6b48f683 *mutableStates;
- (void)setError:(NSError *)arg1 forEntity:(CDStruct_6238c8e0)arg2;
- (void)setState:(CDStruct_6b48f683)arg1 forEntities:(const CDStruct_6238c8e0 *)arg2 count:(unsigned long long)arg3;
- (void)setState:(CDStruct_6b48f683)arg1 forEntity:(CDStruct_6238c8e0)arg2;
@end

