//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/UIActivity.h>

@class MISSING_TYPE, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI28AddToWatchShareSheetActivity : UIActivity
{
    MISSING_TYPE *assetClient;	// 8 = 0x8
    MISSING_TYPE *storefrontLocalizer;	// 48 = 0x30
    MISSING_TYPE *workoutIdentifier;	// 88 = 0x58
}

+ (long long)activityCategory;	// IMP=0x0040000000086970
- (void).cxx_destruct;	// IMP=0x0000000000086e90
- (id)init;	// IMP=0x0000000000086e30
- (void)performActivity;	// IMP=0x0000000000086e00
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x0000000000086c50
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000086b10
@property(nonatomic, readonly) UIImage *activityImage;
@property(nonatomic, readonly) NSString *activityTitle;
@property(nonatomic, readonly) NSString *activityType;

@end
