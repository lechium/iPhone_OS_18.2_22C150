//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsFeed/NSObject-Protocol.h>

@protocol SWPresentationManager <NSObject>
@property(copy, nonatomic, setter=onPresentable:) CDUnknownBlockType presentableBlock;
@property(copy, nonatomic, setter=onLoad:) CDUnknownBlockType loadBlock;
@property(readonly, nonatomic) double height;
@property(nonatomic) unsigned long long presentationState;
- (void)prepareForLegacyResize;
- (void)refresh;
@end

