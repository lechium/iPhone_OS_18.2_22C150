//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, _TtC14iCloudSettings19ManageStorageAction, _TtC14iCloudSettings23ManageStorageAppIconURL;

@interface _TtC14iCloudSettings16ManageStorageApp : NSObject
{
    MISSING_TYPE *label;	// 8 = 0x8
    MISSING_TYPE *detailLabel;	// 24 = 0x18
    MISSING_TYPE *detailLabelColor;	// 40 = 0x28
    MISSING_TYPE *bundleIds;	// 56 = 0x38
    MISSING_TYPE *fetchLocally;	// 64 = 0x40
    MISSING_TYPE *applySystemStyle;	// 65 = 0x41
    MISSING_TYPE *iconUrls;	// 72 = 0x48
    MISSING_TYPE *detailViewIconUrls;	// 80 = 0x50
    MISSING_TYPE *action;	// 88 = 0x58
    MISSING_TYPE *thermometerUsageLabel;	// 96 = 0x60
    MISSING_TYPE *category;	// 112 = 0x70
    MISSING_TYPE *showInAppList;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000006b080
- (id)init;	// IMP=0x000000000006b000
- (id)init:(id)arg1;	// IMP=0x000000000006af70
@property(nonatomic, readonly) _Bool showInAppList; // @synthesize showInAppList;
@property(nonatomic, readonly) NSString *thermometerUsageLabel;
@property(nonatomic, readonly) _TtC14iCloudSettings19ManageStorageAction *action; // @synthesize action;
@property(nonatomic, readonly) _TtC14iCloudSettings23ManageStorageAppIconURL *detailViewIconUrls; // @synthesize detailViewIconUrls;
@property(nonatomic, readonly) _TtC14iCloudSettings23ManageStorageAppIconURL *iconUrls; // @synthesize iconUrls;
@property(nonatomic, readonly) _Bool applySystemStyle; // @synthesize applySystemStyle;
@property(nonatomic, readonly) _Bool fetchLocally; // @synthesize fetchLocally;
@property(nonatomic, readonly) NSArray *bundleIds;
@property(nonatomic, readonly) NSString *detailLabelColor;
@property(nonatomic, readonly) NSString *detailLabel;
@property(nonatomic, readonly) NSString *label;

@end

