//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC14iCloudSettings14StatefulHeader, _TtC14iCloudSettings14StorageSummary;

@interface _TtC14iCloudSettings10HeaderCard : NSObject
{
    MISSING_TYPE *isiCloudPlusSubscriber;	// 8 = 0x8
    MISSING_TYPE *storageState;	// 16 = 0x10
    MISSING_TYPE *storageSummary;	// 32 = 0x20
    MISSING_TYPE *statefulHeader;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000107fd0
- (id)init;	// IMP=0x0000000000107f80
- (id)init:(id)arg1;	// IMP=0x0000000000107f10
@property(nonatomic, readonly) _TtC14iCloudSettings14StatefulHeader *statefulHeader; // @synthesize statefulHeader;
@property(nonatomic, readonly) _TtC14iCloudSettings14StorageSummary *storageSummary; // @synthesize storageSummary;
@property(nonatomic, readonly) NSString *storageState;
@property(nonatomic, readonly) _Bool isiCloudPlusSubscriber; // @synthesize isiCloudPlusSubscriber;

@end

