//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLCloudKitErrors : NSObject
{
}

+ (_Bool)isContainerHasBeenWipedError:(id)arg1;	// IMP=0x00400000000c47f7
+ (_Bool)isOperationThrottledError:(id)arg1;	// IMP=0x00100000000c472a
+ (_Bool)isOperationCancelledOrDeferredError:(id)arg1;	// IMP=0x00100000000c465e
+ (_Bool)isCloudKitOperationCancelledError:(id)arg1;	// IMP=0x00100000000c464c
+ (_Bool)isFeatureDisabledError:(id)arg1;	// IMP=0x00100000000c44b8
+ (_Bool)isRecordNotFoundError:(id)arg1;	// IMP=0x00100000000c442b
+ (id)realErrorForError:(id)arg1;	// IMP=0x00100000000c4183
+ (id)errorsPerZoneIDForPartialFailureError:(id)arg1;	// IMP=0x00100000000c411f
+ (id)errorsPerRecordIDForPartialFailureError:(id)arg1;	// IMP=0x00100000000c40bb
+ (id)_filteredPartialFailureError:(id)arg1 itemClass:(Class)arg2;	// IMP=0x00100000000c3e18
+ (_Bool)isPartialFailureError:(id)arg1;	// IMP=0x00100000000c3d8b
+ (_Bool)getCloudKitErrorCode:(long long *)arg1 internalCode:(long long *)arg2 fromError:(id)arg3;	// IMP=0x00100000000c3969
+ (id)CPLErrorForCloudKitUploadError:(id)arg1 getDestinationRecordIDs:(CDUnknownBlockType)arg2 scopeProvider:(id)arg3 withRequestUUIDs:(id)arg4 uploadAction:(id)arg5;	// IMP=0x00100000000c3318
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeProvider:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;	// IMP=0x00100000000c2243
+ (id)_errorForCancelledError:(id)arg1;	// IMP=0x00100000000c2139
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeProvider:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4;	// IMP=0x00100000000c208e
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3 arguments:(struct __va_list_tag [1])arg4;	// IMP=0x00100000000c2064
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3;	// IMP=0x00100000000c1faa
+ (id)bestErrorForUnderlyingError:(id)arg1;	// IMP=0x00100000000c1f96
+ (id)_bestErrorForUnderlyingError:(id)arg1 scopeProvider:(id)arg2;	// IMP=0x00100000000c167c
+ (id)_rejectionReasonFromPartialError:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000c128a
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;	// IMP=0x00100000000c1098
+ (_Bool)_isCKErrorForRejectedRecord:(id)arg1;	// IMP=0x00100000000c0f68

@end

