//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class CHAutoRefineQueryItem, PKAutoRefineQuery;
@protocol CHStrokeProviderVersion;

@protocol PKAutoRefineQueryDelegate <NSObject>
- (void)autoRefineQuery:(PKAutoRefineQuery *)arg1 didUpdateWithQueryItem:(CHAutoRefineQueryItem *)arg2 validProviderVersion:(id <CHStrokeProviderVersion>)arg3;
@end

