//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class WKWebView, _SFMailContentProvider, _SFPrintController, _SFReaderController;

@protocol _SFMailContentProviderDataSource <NSObject>
- (_SFPrintController *)printControllerForContentProvider:(_SFMailContentProvider *)arg1;
- (WKWebView *)webViewForMailContentProvider:(_SFMailContentProvider *)arg1;
- (_Bool)readerViewIsVisibleForMailContentProvider:(_SFMailContentProvider *)arg1;
- (_SFReaderController *)readerControllerForMailContentProvider:(_SFMailContentProvider *)arg1;
@end
