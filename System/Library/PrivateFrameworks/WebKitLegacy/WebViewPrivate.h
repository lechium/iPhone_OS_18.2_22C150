//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol WebCaretChangeListener, WebDeviceOrientationProvider, WebFormDelegate, WebGeolocationProvider, WebNotificationProvider;

__attribute__((visibility("hidden")))
@interface WebViewPrivate : NSObject
{
    struct RefPtr<WebCore::Page, WTF::RawPtrTraits<WebCore::Page>, WTF::DefaultRefDerefTraits<WebCore::Page>> page;	// 8 = 0x8
    struct RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>> group;	// 16 = 0x10
    id UIDelegate;	// 24 = 0x18
    struct RetainPtr<id> UIDelegateForwarder;	// 32 = 0x20
    id resourceProgressDelegate;	// 40 = 0x28
    id downloadDelegate;	// 48 = 0x30
    id policyDelegate;	// 56 = 0x38
    struct RetainPtr<id> policyDelegateForwarder;	// 64 = 0x40
    id frameLoadDelegate;	// 72 = 0x48
    struct RetainPtr<id> frameLoadDelegateForwarder;	// 80 = 0x50
    id <WebFormDelegate> formDelegate;	// 88 = 0x58
    id editingDelegate;	// 96 = 0x60
    struct RetainPtr<id> editingDelegateForwarder;	// 104 = 0x68
    id scriptDebugDelegate;	// 112 = 0x70
    id historyDelegate;	// 120 = 0x78
    struct RetainPtr<id> resourceProgressDelegateForwarder;	// 128 = 0x80
    struct RetainPtr<id> formDelegateForwarder;	// 136 = 0x88
    struct RetainPtr<WebInspector> inspector;	// 144 = 0x90
    struct RetainPtr<WebNodeHighlight> currentNodeHighlight;	// 152 = 0x98
    struct RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>> formValidationBubble;	// 160 = 0xa0
    _Bool shouldMaintainInactiveSelection;	// 168 = 0xa8
    _Bool allowsUndo;	// 169 = 0xa9
    float zoomMultiplier;	// 172 = 0xac
    _Bool zoomsTextOnly;	// 176 = 0xb0
    struct RetainPtr<NSString> applicationNameForUserAgent;	// 184 = 0xb8
    struct String userAgent;	// 192 = 0xc0
    _Bool userAgentOverridden;	// 200 = 0xc8
    struct RetainPtr<WebPreferences> preferences;	// 208 = 0xd0
    NSURL *userStyleSheetLocation;	// 216 = 0xd8
    struct RetainPtr<WAKWindow> hostWindow;	// 224 = 0xe0
    int programmaticFocusCount;	// 232 = 0xe8
    struct WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;	// 240 = 0xf0
    struct WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;	// 416 = 0x1a0
    struct WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;	// 656 = 0x290
    struct WebHistoryDelegateImplementationCache historyDelegateImplementations;	// 688 = 0x2b0
    _Bool closed;	// 736 = 0x2e0
    _Bool closing;	// 737 = 0x2e1
    unsigned long long deviceOrientation;	// 744 = 0x2e8
    _Bool shouldCloseWithWindow;	// 752 = 0x2f0
    _Bool mainFrameDocumentReady;	// 753 = 0x2f1
    _Bool drawsBackground;	// 754 = 0x2f2
    _Bool tabKeyCyclesThroughElementsChanged;	// 755 = 0x2f3
    _Bool becomingFirstResponder;	// 756 = 0x2f4
    _Bool becomingFirstResponderFromOutside;	// 757 = 0x2f5
    _Bool usesPageCache;	// 758 = 0x2f6
    struct RetainPtr<CGColor *> backgroundColor;	// 760 = 0x2f8
    struct RetainPtr<NSString> mediaStyle;	// 768 = 0x300
    _Bool hasSpellCheckerDocumentTag;	// 776 = 0x308
    long long spellCheckerDocumentTag;	// 784 = 0x310
    _Bool isStopping;	// 792 = 0x318
    id UIKitDelegate;	// 800 = 0x320
    struct RetainPtr<id> UIKitDelegateForwarder;	// 808 = 0x328
    id WebMailDelegate;	// 816 = 0x330
    _Bool allowsMessaging;	// 824 = 0x338
    struct RetainPtr<NSMutableSet> _caretChangeListeners;	// 832 = 0x340
    id <WebCaretChangeListener> _caretChangeListener;	// 840 = 0x348
    struct CGSize fixedLayoutSize;	// 848 = 0x350
    _Bool mainViewIsScrollingOrZooming;	// 864 = 0x360
    _Bool didDrawTiles;	// 865 = 0x361
    struct Lock pendingFixedPositionLayoutRectMutex;	// 866 = 0x362
    struct CGRect pendingFixedPositionLayoutRect;	// 872 = 0x368
    struct RetainPtr<WebUITextIndicatorData> textIndicatorData;	// 904 = 0x388
    struct RetainPtr<WebUITextIndicatorData> dataOperationTextIndicator;	// 912 = 0x390
    struct CGRect dragPreviewFrameInRootViewCoordinates;	// 920 = 0x398
    unsigned long long dragSourceAction;	// 952 = 0x3b8
    struct RetainPtr<NSURL> draggedLinkURL;	// 960 = 0x3c0
    struct RetainPtr<NSString> draggedLinkTitle;	// 968 = 0x3c8
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits> identifierMap;	// 976 = 0x3d0
    _Bool _keyboardUIModeAccessed;	// 984 = 0x3d8
    int _keyboardUIMode;	// 988 = 0x3dc
    _Bool shouldUpdateWhileOffscreen;	// 992 = 0x3e0
    _Bool needsOneShotDrawingSynchronization;	// 993 = 0x3e1
    _Bool postsAcceleratedCompositingNotifications;	// 994 = 0x3e2
    struct unique_ptr<WebViewRenderingUpdateScheduler, std::default_delete<WebViewRenderingUpdateScheduler>> renderingUpdateScheduler;	// 1000 = 0x3e8
    struct CGSize lastLayoutSize;	// 1008 = 0x3f0
    struct RetainPtr<WebVideoFullscreenController> fullscreenController;	// 1024 = 0x400
    struct Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> fullscreenControllersExiting;	// 1032 = 0x408
    struct RetainPtr<WebFullScreenController> newFullscreenController;	// 1048 = 0x418
    struct RetainPtr<WebIndicateLayer> indicateLayer;	// 1056 = 0x420
    id <WebGeolocationProvider> _geolocationProvider;	// 1064 = 0x428
    id <WebDeviceOrientationProvider> m_deviceOrientationProvider;	// 1072 = 0x430
    id <WebNotificationProvider> _notificationProvider;	// 1080 = 0x438
    _Bool interactiveFormValidationEnabled;	// 1088 = 0x440
    int validationMessageTimerMagnification;	// 1092 = 0x444
    float customDeviceScaleFactor;	// 1096 = 0x448
    struct RetainPtr<WebFixedPositionContent> _fixedPositionContent;	// 1104 = 0x450
    struct unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>> m_alternativeTextUIController;	// 1112 = 0x458
    struct RetainPtr<NSData> sourceApplicationAuditData;	// 1120 = 0x460
    _Bool _didPerformFirstNavigation;	// 1128 = 0x468
}

+ (void)initialize;	// IMP=0x0060000000135cc0
- (id).cxx_construct;	// IMP=0x00000000001362d0
- (void).cxx_destruct;	// IMP=0x0000000000135dd0
- (void)dealloc;	// IMP=0x0000000000135da0
- (id)init;	// IMP=0x0000000000135cd0

@end

