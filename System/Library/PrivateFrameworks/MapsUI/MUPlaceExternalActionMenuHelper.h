//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MUGroupedExternalActionController, MUTimeExpirableLRUCache, NSArray, NSMutableDictionary, NSString;
@protocol MUExternalActionHandling;

__attribute__((visibility("hidden")))
@interface MUPlaceExternalActionMenuHelper : NSObject
{
    MUTimeExpirableLRUCache *_iconCache;	// 8 = 0x8
    NSMutableDictionary *_lockupImagesByIdentifiers;	// 16 = 0x10
    MUGroupedExternalActionController *_resolver;	// 24 = 0x18
    id <MUExternalActionHandling> _actionHandler;	// 32 = 0x20
    NSArray *_partnerActionMenuElements;	// 40 = 0x28
    _Bool _isQuickAction;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000819b9
@property(nonatomic) _Bool isQuickAction; // @synthesize isQuickAction=_isQuickAction;
@property(readonly, nonatomic) NSString *symbolName;
@property(readonly, nonatomic) NSString *actionName;
- (void)_downloadImageWithURL:(id)arg1 variant:(unsigned long long)arg2 uniqueIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000815f7
- (void)buildMenuItemViewModelsWithUpdateDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000080e25
- (id)_buildMenuElementForViewModel:(id)arg1 presentationOptions:(id)arg2 isSingleProvider:(_Bool)arg3;	// IMP=0x00000000000803f0
- (unsigned long long)_imageVariantForViewModel:(id)arg1 isSingleProvider:(_Bool)arg2;	// IMP=0x00000000000803c9
- (id)_buildMenuItemViewModelWithCachedImageForViewModel:(id)arg1 isSingleProvider:(_Bool)arg2;	// IMP=0x0000000000080229
- (id)buildMenuElementsWithPresentationOptions:(id)arg1;	// IMP=0x000000000007fc3d
- (id)initWithExternalActionController:(id)arg1 iconCache:(id)arg2;	// IMP=0x000000000007fba4
@property(readonly, nonatomic) MUGroupedExternalActionController *actionController;

@end

