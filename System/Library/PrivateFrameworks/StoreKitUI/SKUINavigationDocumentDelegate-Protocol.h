//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class IKJSNavigationDocument, JSContext, SKUINavigationDocumentController;

@protocol SKUINavigationDocumentDelegate <NSObject>

@optional
- (void)navigationDocumentController:(SKUINavigationDocumentController *)arg1 requestsAccessToAppContextUsingBlock:(void (^)(IKAppContext *))arg2;
- (IKJSNavigationDocument *)jsNavigationDocumentForNavigationDocumentController:(SKUINavigationDocumentController *)arg1 inContext:(JSContext *)arg2;
- (void)navigationDocumentStackDidChange:(SKUINavigationDocumentController *)arg1;
@end
