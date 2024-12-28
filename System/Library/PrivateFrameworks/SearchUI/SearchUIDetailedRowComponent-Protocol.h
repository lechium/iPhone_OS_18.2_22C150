//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class SearchUIDetailedRowModel, UIView;
@protocol SearchUIFeedbackDelegate;

@protocol SearchUIDetailedRowComponent <NSObject>
+ (_Bool)supportsRowModel:(SearchUIDetailedRowModel *)arg1;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate;
@property(retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property(retain, nonatomic) UIView *view;
- (_Bool)shouldVerticallyCenter;
- (void)updateWithRowModel:(SearchUIDetailedRowModel *)arg1;
- (UIView *)setupView;
@end
