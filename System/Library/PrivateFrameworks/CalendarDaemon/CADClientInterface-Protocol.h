//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol CADClientInterface
- (void)CADClientReceiveDatabaseIntegrityErrors:(NSArray *)arg1;
- (void)CADClientReceiveDiagnosticsCollectionResults:(NSArray *)arg1 forToken:(unsigned int)arg2 finished:(_Bool)arg3;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(NSArray *)arg1 forSearchToken:(unsigned int)arg2 finished:(_Bool)arg3;
@end

