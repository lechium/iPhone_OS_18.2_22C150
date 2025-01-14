//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface NLLogCategory : NSObject
{
    NSObject<OS_os_log> *_internal;	// 8 = 0x8
    NSString *_loggingCategory;	// 16 = 0x10
    NSString *_loggingSubsystem;	// 24 = 0x18
}

+ (id)_getCategory:(id)arg1;	// IMP=0x0060000000042812
+ (void)_addCategory:(id)arg1 inSubsystem:(id)arg2;	// IMP=0x0060000000042765
+ (id)categoryWithName:(id)arg1 inSubsystem:(id)arg2;	// IMP=0x00600000000426b8
+ (id)categoryWithName:(id)arg1;	// IMP=0x0060000000042698
+ (id)defaultCategory;	// IMP=0x0060000000042678
+ (void)initialize;	// IMP=0x0060000000042618
- (void).cxx_destruct;	// IMP=0x000000000004297d
@property(readonly, nonatomic) NSString *loggingSubsystem; // @synthesize loggingSubsystem=_loggingSubsystem;
@property(readonly, nonatomic) NSString *loggingCategory; // @synthesize loggingCategory=_loggingCategory;
@property(readonly, nonatomic) NSObject<OS_os_log> *internal; // @synthesize internal=_internal;
- (id)initCategory:(id)arg1 inSubsystem:(id)arg2;	// IMP=0x000000000004287c

@end

