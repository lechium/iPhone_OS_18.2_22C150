//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, IKJSNavigationDocument, NSMutableArray, NSString, SKUINavigationDocumentController;

__attribute__((visibility("hidden")))
@interface SKUIJSDOMFeatureNavigationDocument : NSObject
{
    IKJSNavigationDocument *_jsNavigationDocument;	// 8 = 0x8
    SKUINavigationDocumentController *_navigationDocumentController;	// 16 = 0x10
    NSMutableArray *_stackItems;	// 24 = 0x18
    IKAppContext *_appContext;	// 32 = 0x20
    NSString *_featureName;	// 40 = 0x28
}

+ (id)possibleFeatureNames;	// IMP=0x0010000000304409
+ (id)makeFeatureJSObjectForFeature:(id)arg1;	// IMP=0x0010000000304330
- (void).cxx_destruct;	// IMP=0x0000000000304df7
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController; // @synthesize navigationDocumentController=_navigationDocumentController;
- (void)removeDocument:(id)arg1;	// IMP=0x0000000000304cbc
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;	// IMP=0x0000000000304af0
- (void)popToRootDocument;	// IMP=0x0000000000304a8b
- (void)popToDocument:(id)arg1;	// IMP=0x000000000030495f
- (void)popDocument;	// IMP=0x000000000030492f
- (void)pushDocument:(id)arg1 options:(id)arg2;	// IMP=0x0000000000304856
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;	// IMP=0x000000000030468a
- (id)documents;	// IMP=0x00000000003044b8
- (void)clear;	// IMP=0x0000000000304488
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;	// IMP=0x0000000000304184

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

