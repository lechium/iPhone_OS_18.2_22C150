//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDocumentPickerURLContainerModel.h"

@class BRContainer, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerAllContainersModel : _UIDocumentPickerURLContainerModel
{
    NSArray *_scopes;	// 8 = 0x8
    BRContainer *_sourceContainer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003b400
- (id)scopes;	// IMP=0x000000000003b3c9
- (void)startMonitoringChanges;	// IMP=0x000000000003afd4
- (void)updateScopes;	// IMP=0x000000000003ae11
- (id)_createObserver;	// IMP=0x000000000003ada6
- (id)displayTitle;	// IMP=0x000000000003ad99
- (_Bool)shouldShowTopLevelContainers;	// IMP=0x000000000003ad91
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;	// IMP=0x000000000003ad76
- (id)initWithFoldersForPickableTypes:(id)arg1 mode:(unsigned long long)arg2 sourceContainer:(id)arg3;	// IMP=0x000000000003acf2

@end

