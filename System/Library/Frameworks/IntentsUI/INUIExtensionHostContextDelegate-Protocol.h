//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntentsUI/NSObject-Protocol.h>

@class INIntent, _INUIExtensionHostContext;

@protocol INUIExtensionHostContextDelegate <NSObject>
- (void)extensionHostContextWillBeginEditing:(_INUIExtensionHostContext *)arg1;
- (void)extensionHostContext:(_INUIExtensionHostContext *)arg1 wantsToHandleIntent:(INIntent *)arg2;
@end

