//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AXPTranslator.h"

@class AXUIElement, NSLock, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AXPTranslator_iOS : AXPTranslator
{
    NSMutableDictionary *_translationCache;	// 8 = 0x8
    NSMutableDictionary *_backTranslationCache;	// 16 = 0x10
    NSMutableArray *_cachedElements;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 32 = 0x20
    _Bool _axAppReadyFlag;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_threadSemaphore;	// 48 = 0x30
    _Bool _accessibilityEnabled;	// 56 = 0x38
    _Bool _shouldHonorGroupsForElementTraversal;	// 57 = 0x39
    _Bool _shouldStopGeneratingAXTree;	// 58 = 0x3a
    struct __AXObserver *_axEventObserver;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_axTreeDumpSharedBackgroundQueue;	// 72 = 0x48
    AXUIElement *_systemAppElement;	// 80 = 0x50
    AXUIElement *_systemWideElement;	// 88 = 0x58
    AXUIElement *_frontmostAppOnContinuityDisplay;	// 96 = 0x60
    CDUnknownBlockType _axTreeDumpCompletionHandler;	// 104 = 0x68
    NSLock *_axTreeDumpLock;	// 112 = 0x70
    long long _axTreeDumpCurrentChildIndex;	// 120 = 0x78
    NSString *_axTreeDumpCurrentType;	// 128 = 0x80
    NSMutableArray *_axTreeDumpCurrentlyProcessingChildren;	// 136 = 0x88
    NSMutableArray *_axTreeDumpCurrentOutput;	// 144 = 0x90
}

+ (id)translationObjectFromUIKitObject:(id)arg1;	// IMP=0x006000000000fd96
+ (id)sharedInstance;	// IMP=0x0060000000001f6c
- (void).cxx_destruct;	// IMP=0x00000000000102c4
@property(retain, nonatomic) NSMutableArray *axTreeDumpCurrentOutput; // @synthesize axTreeDumpCurrentOutput=_axTreeDumpCurrentOutput;
@property(retain, nonatomic) NSMutableArray *axTreeDumpCurrentlyProcessingChildren; // @synthesize axTreeDumpCurrentlyProcessingChildren=_axTreeDumpCurrentlyProcessingChildren;
@property(retain, nonatomic) NSString *axTreeDumpCurrentType; // @synthesize axTreeDumpCurrentType=_axTreeDumpCurrentType;
@property(nonatomic) long long axTreeDumpCurrentChildIndex; // @synthesize axTreeDumpCurrentChildIndex=_axTreeDumpCurrentChildIndex;
@property(nonatomic) _Bool shouldStopGeneratingAXTree; // @synthesize shouldStopGeneratingAXTree=_shouldStopGeneratingAXTree;
@property(retain, nonatomic) NSLock *axTreeDumpLock; // @synthesize axTreeDumpLock=_axTreeDumpLock;
@property(copy, nonatomic) CDUnknownBlockType axTreeDumpCompletionHandler; // @synthesize axTreeDumpCompletionHandler=_axTreeDumpCompletionHandler;
@property(nonatomic) _Bool shouldHonorGroupsForElementTraversal; // @synthesize shouldHonorGroupsForElementTraversal=_shouldHonorGroupsForElementTraversal;
@property(retain, nonatomic) AXUIElement *frontmostAppOnContinuityDisplay; // @synthesize frontmostAppOnContinuityDisplay=_frontmostAppOnContinuityDisplay;
@property(retain, nonatomic) AXUIElement *systemWideElement; // @synthesize systemWideElement=_systemWideElement;
@property(retain, nonatomic) AXUIElement *systemAppElement; // @synthesize systemAppElement=_systemAppElement;
- (void)setAxTreeDumpSharedBackgroundQueue:(id)arg1;	// IMP=0x000000000001013a
@property(retain, nonatomic) struct __AXObserver *axEventObserver; // @synthesize axEventObserver=_axEventObserver;
- (_Bool)accessibilityEnabled;	// IMP=0x0000000000010108
- (id)remoteTranslationDataWithTranslation:(id)arg1 pid:(int)arg2;	// IMP=0x000000000000ffc6
- (id)translationObjectFromData:(id)arg1;	// IMP=0x000000000000ff7a
- (id)platformElementFromTranslation:(id)arg1;	// IMP=0x000000000000fe20
- (void)processPlatformAXTreeDump:(id)arg1;	// IMP=0x000000000000fe1a
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;	// IMP=0x000000000000fe14
- (id)translationObjectFromPlatformElement:(struct __AXUIElement *)arg1;	// IMP=0x000000000000f7e2
- (struct __AXUIElement *)createPlatformElementFromTranslationObject:(id)arg1;	// IMP=0x000000000000f5a7
- (id)processHitTest:(id)arg1;	// IMP=0x000000000000efee
- (id)_allAXTreeAttrValues;	// IMP=0x000000000000ef9e
- (id)_allAXTreeCanSetAttrValues;	// IMP=0x000000000000ef4e
- (id)_topPriorityAXTreeAttrValues;	// IMP=0x000000000000eefe
- (id)_allAXTreeActions;	// IMP=0x000000000000eeae
- (id)_frontmostAppChildrenForXCTest;	// IMP=0x000000000000ec2d
- (id)_postProcessResultDataForSecureCoding:(id)arg1;	// IMP=0x000000000000e3e1
- (void)_safelyAddAXTreeDumpResponseToCurrentOutput:(id)arg1;	// IMP=0x000000000000e275
- (void)generateAXTreeDumpTypeOnBackgroundThread:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000de0c
- (void)axTreeDumpGenerateNextSetOfElementAttrsOnMainThread;	// IMP=0x000000000000cf75
- (void)_axTreeDumpCleanUpState;	// IMP=0x000000000000ce7d
- (void)fetchNextSetOfElementAttrsOnBackgroundThreadWithEarlyTermination:(_Bool)arg1;	// IMP=0x000000000000cb77
- (void)stopGeneratingAXTreeDump;	// IMP=0x000000000000ca52
- (id)axTreeDumpSharedBackgroundQueue;	// IMP=0x000000000000c9cc
- (void)setRequestResolvingBehavior:(unsigned long long)arg1;	// IMP=0x000000000000c977
- (id)processFrontMostApp:(id)arg1 withiOSAttribute:(long long)arg2;	// IMP=0x000000000000c55d
- (id)_processFrontMostAppForContinuity:(id)arg1;	// IMP=0x000000000000c546
- (id)processFrontMostApp:(id)arg1;	// IMP=0x000000000000c52f
- (id)processApplicationObject:(id)arg1;	// IMP=0x000000000000c3f4
- (id)processAttributeRequest:(id)arg1;	// IMP=0x000000000000be17
- (id)_preprocessRequest:(long long)arg1 parameter:(id)arg2;	// IMP=0x000000000000ba7d
- (id)processSupportsAttributes:(id)arg1;	// IMP=0x000000000000b6c0
- (id)processSupportedActions:(id)arg1;	// IMP=0x000000000000b41c
- (id)processSetAttribute:(id)arg1;	// IMP=0x000000000000afbf
- (id)processCanSetAttribute:(id)arg1;	// IMP=0x000000000000ad58
- (id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4 client:(unsigned long long)arg5;	// IMP=0x000000000000a80c
- (id)_processVisibleOpaqueElements:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x000000000000a6da
- (id)_processFirstElementForFocus:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000a5c0
- (id)_processLastContainedElement:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000a40b
- (id)_processIsFocusedAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000a31f
- (id)_processFocusedElementAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000a261
- (id)_processFirstContainedElement:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000a0ac
- (id)_processCustomActionsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x000000000000a012
- (id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 error:(unsigned long long *)arg3 client:(unsigned long long)arg4;	// IMP=0x0000000000009fea
- (id)_processSubroleAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000009ebe
- (id)_processStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000009d2c
- (id)_processAttributedStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000009a5f
- (id)_processAuditIssuesAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000009707
- (id)_processVisibleTextRangeAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x000000000000962a
- (id)_processBoundsForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000094f3
- (id)_processRoleDescriptionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000009005
- (unsigned long long)_processRoleAttributeRequest:(id)arg1 traits:(unsigned long long)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000008b78
- (id)_processRoleAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000008a9a
- (id)_processNumberOfCharactersAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000008a1d
- (id)_processLabelAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 axpAttribute:(unsigned long long)arg3;	// IMP=0x00000000000089b2
- (id)_processSyntheticStringValueAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000008849
- (id)_processValueAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 axpAttribute:(unsigned long long)arg3 useAttributes:(_Bool)arg4;	// IMP=0x000000000000864f
- (id)_processingSmuggledMarzipanRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000084cc
- (id)_processSelectedTextRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000008363
- (id)_processRawElementDataRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000082a3
- (id)_processMoveFocusToOpaqueElementAttributeRequest:(id)arg1 parameter:(id)arg2 direction:(long long)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000000008037
- (id)_processPreviousLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000007e93
- (id)_processNextLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000007cfa
- (id)_processLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000007c6c
- (id)_processZoomAttributeRequest:(_Bool)arg1 axElement:(id)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000000007bae
- (id)_processTextInputMarkedRangeAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000007990
- (id)_processIndexForTextMarkerAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000007707
- (id)_processLinkedUIElementsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000073db
- (id)_processElementHelpAttributeResquest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x000000000000730a
- (id)_processCellWithIndexPathAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000007139
- (id)_processClassNameAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000070bd
- (id)_processChildrenAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000006f2f
- (id)_processBrailleOverrideForAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 attribute:(unsigned long long)arg3;	// IMP=0x0000000000006e69
- (id)_processUserInputLabelsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2 axpAttribute:(unsigned long long)arg3;	// IMP=0x0000000000006528
- (id)_processIsEnabledAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000064b2
- (id)_processIsRemoteElementAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000006467
- (id)_processIsSelectedAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000063f1
- (id)_processViewControllerDescriptionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00000000000062da
- (id)_processStartsMediaSessionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000006264
- (id)_processDirectAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 parameter:(id)arg4 error:(unsigned long long *)arg5;	// IMP=0x000000000000616a
- (id)_processCustomRotorData:(id)arg1;	// IMP=0x0000000000005c91
- (id)_processAuditIssuesResult:(id)arg1;	// IMP=0x0000000000005963
- (id)_processOutgoingCustomRotorSearchResult:(id)arg1;	// IMP=0x000000000000587c
- (id)_postProcessAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 result:(id)arg4 error:(unsigned long long *)arg5;	// IMP=0x0000000000005128
- (id)_processParameterizedAttributeRequest:(id)arg1 attribute:(long long)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00000000000050d6
- (id)processActionRequest:(id)arg1;	// IMP=0x0000000000004ea8
- (id)axElementFromTranslatorRequest:(id)arg1;	// IMP=0x0000000000004dda
- (id)_nilOutEmptyValue:(id)arg1;	// IMP=0x0000000000004c40
- (id)processMultipleAttributeRequest:(id)arg1 removeEmptyValue:(_Bool)arg2;	// IMP=0x000000000000435e
- (id)processMultipleAttributeRequest:(id)arg1;	// IMP=0x000000000000434a
- (long long)attributeFromRequest:(unsigned long long)arg1;	// IMP=0x0000000000004330
- (void)enableAccessibility;	// IMP=0x000000000000431e
- (void)_enableAccessibilityBridgeRuntime;	// IMP=0x00000000000040f1
- (void)_signalAppAXReady;	// IMP=0x00000000000040ca
- (void)setAccessibilityEnabled:(_Bool)arg1;	// IMP=0x00000000000040a5
- (void)initializeAXRuntimeForSystemAppServer;	// IMP=0x0000000000003d8c
- (id)_processAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;	// IMP=0x0000000000003d84
- (_Bool)_processPerformAction:(int)arg1 value:(id)arg2;	// IMP=0x0000000000003d7c
- (id)_processAccessibilityAttributeValue:(long long)arg1;	// IMP=0x0000000000003c99
- (void)_registerAccessibilityNotifications;	// IMP=0x00000000000037b6
- (CDUnknownBlockType)attributedStringConversionBlock;	// IMP=0x00000000000026e5
- (id)backTranslationCache;	// IMP=0x00000000000026b6
- (id)translationCache;	// IMP=0x0000000000002687
- (void)_removeCacheEntriesForElement:(id)arg1;	// IMP=0x00000000000023c1
- (void)_addCacheElement:(id)arg1 translationObject:(id)arg2;	// IMP=0x0000000000002145
- (id)init;	// IMP=0x0000000000002009

@end

