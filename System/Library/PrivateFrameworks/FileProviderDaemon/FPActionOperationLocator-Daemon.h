//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPActionOperationLocator.h>

@interface FPActionOperationLocator (Daemon)
- (void)annotateWithPersonaSandboxIfNeeded:(id)arg1;	// IMP=0x00300000000abc92
- (id)startAccessingLocator;	// IMP=0x00300000000abbc4
@property(readonly, nonatomic) _Bool isDownloaded;
- (unsigned long long)materializeOptionForDestinationItem:(id)arg1 recursively:(_Bool)arg2 isCopy:(_Bool)arg3 extensionManager:(id)arg4;	// IMP=0x00300000000ab929
- (_Bool)willRequireDownloadForSourceItem:(id)arg1 extensionManager:(id)arg2;	// IMP=0x00300000000ab6cd
- (id)materializedURLWithDomain:(id)arg1;	// IMP=0x00300000000ab5e8
- (id)materializedURLWithExtensionManager:(id)arg1;	// IMP=0x00300000000ab4e2
@end

