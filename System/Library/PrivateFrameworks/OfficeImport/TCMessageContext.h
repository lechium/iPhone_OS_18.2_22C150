//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TCMessageContext : NSObject
{
    NSMutableSet *m_warnings;	// 8 = 0x8
    NSMutableSet *m_errors;	// 16 = 0x10
    NSMutableArray *m_affectedObjectStack;	// 24 = 0x18
    NSMutableDictionary *m_placeholderToObjectMap;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *mMessageSyncQueue;	// 40 = 0x28
}

+ (void)reportWarningsToDelegate;	// IMP=0x00600000002d41cf
+ (void)restoreAffectedObjectStack:(unsigned long long)arg1;	// IMP=0x00600000002d40fa
+ (unsigned long long)saveAffectedObjectStack;	// IMP=0x00600000002d402d
+ (void)popAffectedObjectPlaceholder:(id)arg1;	// IMP=0x00600000002d3f3a
+ (void)pushAffectedObjectPlaceholder;	// IMP=0x00600000002d3e74
+ (void)popAffectedObject;	// IMP=0x00600000002d3dae
+ (void)pushAffectedObject:(id)arg1;	// IMP=0x00600000002d3cbb
+ (_Bool)isFileStructuredStorage;	// IMP=0x00600000002d3caf
+ (void)setIsFileStructuredStorage:(_Bool)arg1;	// IMP=0x00600000002d3ca3
+ (unsigned long long)getErrorCount;	// IMP=0x00600000002d3bcc
+ (id)getErrorArray;	// IMP=0x00600000002d3ab1
+ (id)getWarningArray;	// IMP=0x00600000002d3996
+ (void)removeContextForCurrentThread;	// IMP=0x00600000002d38f9
+ (void)createContextForCurrentThread;	// IMP=0x00600000002d3838
+ (void)reportErrorException:(id)arg1;	// IMP=0x00600000002d3714
+ (void)reportWarningException:(id)arg1;	// IMP=0x00600000002d3297
+ (void)reportError:(id)arg1;	// IMP=0x00600000002d3066
+ (void)reportWarning:(id)arg1;	// IMP=0x00600000002d2f3d
+ (void)reportObject:(id)arg1 withWarning:(id)arg2;	// IMP=0x00600000002d2e28
+ (id)currentObjectOrPlaceholder;	// IMP=0x00600000002d2d4f
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(id)arg2 parameters:(struct __va_list_tag [1])arg3;	// IMP=0x00600000002d2c0c
+ (void)initialize;	// IMP=0x00600000002d2a58
- (void).cxx_destruct;	// IMP=0x00000000002d448d
- (void)reportWarningForObject:(id)arg1 warning:(id)arg2 parameterList:(struct __va_list_tag [1])arg3;	// IMP=0x00000000002d4295
- (void)dealloc;	// IMP=0x00000000002d2bc4
- (id)init;	// IMP=0x00000000002d2a9b
- (void)reportWarningsToDelegate;	// IMP=0x00000000002d6d05
- (void)replacePlaceholdersWithObjects;	// IMP=0x00000000002d697f
- (void)setAffectedObject:(id)arg1 forPlaceholderWithKey:(id)arg2;	// IMP=0x00000000002d68bb
- (void)restoreAffectedObjectStack:(unsigned long long)arg1;	// IMP=0x00000000002d6782
- (unsigned long long)saveAffectedObjectStack;	// IMP=0x00000000002d66c5
- (void)popAffectedObjectPlaceholder:(id)arg1;	// IMP=0x00000000002d64cc
- (void)resolveObjectOfCurrentAffectedObjectPlaceholder;	// IMP=0x00000000002d6097
- (void)pushAffectedObjectPlaceholder;	// IMP=0x00000000002d5ffa
- (void)popAffectedObject;	// IMP=0x00000000002d5f0a
- (void)pushAffectedObject:(id)arg1;	// IMP=0x00000000002d5df1
- (void)addWarningMessageEntry:(id)arg1;	// IMP=0x00000000002d5d45
- (void)addErrorMessageEntry:(id)arg1;	// IMP=0x00000000002d5c99
- (id)currentObjectOrPlaceholder;	// IMP=0x00000000002d5a79

@end

