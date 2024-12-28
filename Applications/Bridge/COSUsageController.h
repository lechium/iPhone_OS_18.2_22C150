//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSListController.h>

@class NSMutableArray, NSSManager, NSSUsageData;

@interface COSUsageController : BPSListController
{
    _Bool _usageDataPending;	// 184 = 0xb8
    _Bool _usageDataFailed;	// 185 = 0xb9
    NSSManager *_nssManager;	// 192 = 0xc0
    NSMutableArray *_bundleUsages;	// 200 = 0xc8
    NSSUsageData *_usageData;	// 208 = 0xd0
}

+ (id)capacityBarCategoriesForUsageData:(id)arg1;	// IMP=0x004000000003927f
+ (id)prettyUsageString:(float)arg1;	// IMP=0x00100000000391d5
- (void).cxx_destruct;	// IMP=0x0020000000039972
@property(nonatomic) _Bool usageDataFailed; // @synthesize usageDataFailed=_usageDataFailed;
@property(nonatomic) _Bool usageDataPending; // @synthesize usageDataPending=_usageDataPending;
@property(retain, nonatomic) NSSUsageData *usageData; // @synthesize usageData=_usageData;
@property(retain, nonatomic) NSMutableArray *bundleUsages; // @synthesize bundleUsages=_bundleUsages;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
- (id)appUsage:(id)arg1;	// IMP=0x00100000000390d3
- (id)dash;	// IMP=0x00100000000390ac
- (id)specifiers;	// IMP=0x00100000000384e6
- (void)initControls;	// IMP=0x0010000000038443
- (id)init;	// IMP=0x0010000000038080

@end
