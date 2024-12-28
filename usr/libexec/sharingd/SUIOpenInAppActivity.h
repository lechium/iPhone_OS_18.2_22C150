//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class LSApplicationProxy, LSDocumentProxy, MISSING_TYPE, NSData, NSDictionary, NSOrderedSet, NSString, UISUISecurityContext;

@interface SUIOpenInAppActivity : UIActivity
{
    _Bool _isContentManaged;	// 8 = 0x8
    _Bool _appIsDocumentTypeOwner;	// 9 = 0x9
    MISSING_TYPE *_applicationIdentifier;	// 16 = 0x10
    LSDocumentProxy *_documentProxy;	// 24 = 0x18
    UISUISecurityContext *_securityContext;	// 32 = 0x20
    NSData *_sourceApplicationAuditTokenData;	// 40 = 0x28
    NSDictionary *_openURLAnnotationsByURL;	// 48 = 0x30
    LSApplicationProxy *_applicationProxy;	// 56 = 0x38
    NSOrderedSet *_supportedTypeIdentifiers;	// 64 = 0x40
}

+ (id)_activitiesForFileURL:(id)arg1 isContentManaged:(_Bool)arg2 sourceApplicationAuditTokenData:(id)arg3 includeSourceApplicationInResults:(_Bool)arg4 supportedTypeIdentifiers:(id)arg5;	// IMP=0x00200000001cd740
+ (long long)activityCategory;	// IMP=0x00100000001cd5cf
+ (Class)classForPreparingExtensionItemData;	// IMP=0x00100000001ccbdb
+ (id)openInActivitiesForItems:(id)arg1 isContentManaged:(_Bool)arg2 sourceApplicationAuditTokenData:(id)arg3 includeSourceApplicationInResults:(_Bool)arg4 supportedTypeIdentifiers:(id)arg5;	// IMP=0x00100000001cb936
+ (Class)classForOpenByCopyActivity;	// IMP=0x00100000001cb63f
+ (Class)classForOpenInPlaceActivity;	// IMP=0x00100000001cb62e
- (void).cxx_destruct;	// IMP=0x00200000001ce33d
@property(copy, nonatomic) NSOrderedSet *supportedTypeIdentifiers; // @synthesize supportedTypeIdentifiers=_supportedTypeIdentifiers;
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property(nonatomic, getter=_appIsDocumentTypeOwner, setter=_setAppIsDocumentTypeOwner:) _Bool appIsDocumentTypeOwner; // @synthesize appIsDocumentTypeOwner=_appIsDocumentTypeOwner;
@property(retain, nonatomic) NSDictionary *openURLAnnotationsByURL; // @synthesize openURLAnnotationsByURL=_openURLAnnotationsByURL;
@property(retain, nonatomic) NSData *sourceApplicationAuditTokenData; // @synthesize sourceApplicationAuditTokenData=_sourceApplicationAuditTokenData;
@property(nonatomic) _Bool isContentManaged; // @synthesize isContentManaged=_isContentManaged;
@property(retain, nonatomic) UISUISecurityContext *securityContext; // @synthesize securityContext=_securityContext;
@property(retain, nonatomic) LSDocumentProxy *documentProxy; // @synthesize documentProxy=_documentProxy;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)_firstMatchingDocumentProxyForActivityItems:(id)arg1;	// IMP=0x00100000001cdbc4
- (void)performActivity;	// IMP=0x00100000001ce8ba
- (id)activityTitle;	// IMP=0x00100000001ce88e
- (id)activityType;	// IMP=0x00100000001cd6f9
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00100000001cd6c0
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00100000001cd63a
- (id)_activitySettingsImage;	// IMP=0x00100000001cd611
- (id)_activityImage;	// IMP=0x00100000001cd5e5
- (long long)_defaultSortGroup;	// IMP=0x00100000001cd5da
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;	// IMP=0x00100000001cd565
- (void)prepareWithActivityExtensionItemData:(id)arg1;	// IMP=0x00100000001cd058
- (void)prepareWithActivityItemData:(id)arg1;	// IMP=0x00100000001ccbec
- (id)_bookmarkWithSandboxExtensionForExport;	// IMP=0x00100000001cc9bd
- (void)performLaunchServicesImportOpenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cc7a0
- (_Bool)openByImportWillHandlePromiseURLs;	// IMP=0x00100000001cc70a
- (void)performLaunchServicesInPlaceOpenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cc2f8
- (_Bool)openInPlaceWillHandlePromiseURLs;	// IMP=0x00100000001cc2f0
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000001cc239
- (void)_performLaunchServicesOpenWithDocumentOpenURL:(id)arg1 launchServiceOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cbcde
@property(readonly, copy) NSString *description;
- (id)initWithApplicationProxy:(id)arg1 documentProxy:(id)arg2 isContentManaged:(_Bool)arg3 sourceApplicationAuditTokenData:(id)arg4 appIsDocumentTypeOwner:(_Bool)arg5 supportedTypeIdentifiers:(id)arg6;	// IMP=0x00100000001cb650
- (id)ss_activitySpecificExtensionItemDataRequestInfo;	// IMP=0x00100000001cb5e7
- (id)ss_activityTypeToReportToHost;	// IMP=0x00100000001cb5da
- (_Bool)ss_shouldExecuteInShareSheet;	// IMP=0x00100000001cb5d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
