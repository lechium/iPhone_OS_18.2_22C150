//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pegasus/NSObject-Protocol.h>

@class PGCommand, PGControlsViewModel, PGControlsViewModelValues;

@protocol PGControlsViewModelDelegate <NSObject>
- (void)controlsViewModel:(PGControlsViewModel *)arg1 didIssueCommand:(PGCommand *)arg2;
- (void)controlsViewModel:(PGControlsViewModel *)arg1 valuesChangedFromOldValue:(PGControlsViewModelValues *)arg2;
@end
