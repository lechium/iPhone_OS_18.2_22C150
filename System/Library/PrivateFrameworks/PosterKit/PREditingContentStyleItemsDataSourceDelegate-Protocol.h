//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class PREditingPosterContentStyleCoordinator;
@protocol PREditingContentStyleItemsDataSource, PRPosterContentStyle;

@protocol PREditingContentStyleItemsDataSourceDelegate <NSObject>
- (PREditingPosterContentStyleCoordinator *)coordinatorForStyle:(id <PRPosterContentStyle>)arg1 isSuggestedStyle:(_Bool)arg2 fromDataSource:(id <PREditingContentStyleItemsDataSource>)arg3;
@end

