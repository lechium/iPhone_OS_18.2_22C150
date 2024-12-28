//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModelObjectCoder-Protocol.h>

@class HMBModel, HMBModelContainer, HMBModelContainerEncodingContext, NSString;
@protocol CKRecordValue;

@protocol HMBModelNativeCKWrapper <HMBModelObjectCoder>
+ (void)applyNativeCKValue:(id <CKRecordValue>)arg1 fromSource:(unsigned long long)arg2 associatingWith:(HMBModelContainer *)arg3 toModel:(HMBModel *)arg4 propertyNamed:(NSString *)arg5;
- (id <CKRecordValue>)nativeCKValueWithEncodingContext:(HMBModelContainerEncodingContext *)arg1 error:(id *)arg2;

@optional
+ (_Bool)includeInModelEncoding;
@end
