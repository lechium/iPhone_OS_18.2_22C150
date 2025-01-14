//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class UIColor;
@protocol SFPrivacyReportGridItemDelegate;

@protocol SFPrivacyReportGridItem <NSObject>
@property(copy, nonatomic) CDUnknownBlockType action;
@property(nonatomic) double cellBackgroundCornerRadius;
@property(retain, nonatomic) UIColor *cellBackgroundColor;
@property(nonatomic) unsigned long long gridPosition;
@property(nonatomic) __weak id <SFPrivacyReportGridItemDelegate> delegate;
@end

