//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (NSSAdditions)
+ (id)nss_MarketingPageURL;	// IMP=0x00500000000095fa
+ (id)nss_NewsURLWithPathComponents:(id)arg1 queryItems:(id)arg2 internal:(_Bool)arg3;	// IMP=0x0050000000009489
+ (id)nss_NewsURLWithPathComponents:(id)arg1 internal:(_Bool)arg2;	// IMP=0x005000000000946d
+ (id)nss_NewsURLForArticleID:(id)arg1 internal:(_Bool)arg2 targetIsVideo:(_Bool)arg3 hardPaywall:(_Bool)arg4;	// IMP=0x0050000000009454
+ (id)nss_NewsURLForPuzzle;	// IMP=0x0050000000008efb
+ (id)nss_NewsURLForManageNotifications;	// IMP=0x0050000000008e5a
+ (id)nss_NewsURLForFavoritesPicker;	// IMP=0x0050000000008db9
+ (id)nss_NewsURLForHistory;	// IMP=0x0050000000008d18
+ (id)nss_NewsURLForSaved;	// IMP=0x0050000000008c77
+ (id)nss_NewsURLForMySportsHighlights;	// IMP=0x0050000000008bd6
+ (id)nss_NewsURLForMySportsScores;	// IMP=0x0050000000008b35
+ (id)nss_NewsURLForMySports;	// IMP=0x0050000000008a94
+ (id)nss_NewsURLForPuzzleHub;	// IMP=0x00500000000089f3
+ (id)nss_NewsURLForMyMagazines;	// IMP=0x0050000000008952
+ (id)nss_NewsURLForMagazines;	// IMP=0x00500000000088b1
+ (id)nss_NewsURLForForYou;	// IMP=0x0050000000008810
+ (id)nss_NewsURLForTagID:(id)arg1 feedConfiguration:(unsigned long long)arg2;	// IMP=0x00500000000084dd
+ (id)nss_NewsURLForTagID:(id)arg1;	// IMP=0x00500000000084c9
+ (id)nss_NewsURLForArticleID:(id)arg1 routeURL:(id)arg2;	// IMP=0x005000000000841f
+ (id)nss_NewsURLForArticleID:(id)arg1 title:(id)arg2;	// IMP=0x00500000000083a3
+ (id)nss_NewsURLForArticleID:(id)arg1 targetIsVideo:(_Bool)arg2;	// IMP=0x0050000000008389
+ (id)nss_NewsURLForPuzzleTypeID:(id)arg1;	// IMP=0x0050000000008223
+ (id)nss_NewsURLForFullArchivePuzzleTypeID:(id)arg1;	// IMP=0x00500000000080b2
+ (id)nss_NewsURLForPuzzleID:(id)arg1;	// IMP=0x0050000000007f4c
+ (id)nss_NewsURLForIssueID:(id)arg1;	// IMP=0x0050000000007de6
+ (id)nss_NewsURLForArticleID:(id)arg1;	// IMP=0x0050000000007dd2
+ (id)nss_NewsURLForWebLinkURL:(id)arg1;	// IMP=0x0050000000007bfe
- (id)_nss_valueForQueryParameterWithKey:(id)arg1;	// IMP=0x001000000000918c
- (id)_nss_URLByAppendingQueryItem:(id)arg1;	// IMP=0x001000000000906d
- (id)nss_campaignID;	// IMP=0x0010000000009054
- (id)nss_URLWithVideoTarget:(_Bool)arg1;	// IMP=0x0010000000009042
- (id)nss_URLWithCampaignID:(id)arg1;	// IMP=0x0010000000008f9c
- (_Bool)nss_isNewsIssueURL;	// IMP=0x00100000000087fe
- (_Bool)nss_isPuzzleTypeURL;	// IMP=0x00100000000087ec
- (_Bool)nss_isPuzzleURL;	// IMP=0x00100000000087da
- (_Bool)nss_isSportsEventURL;	// IMP=0x00100000000087c8
- (_Bool)nss_isSubscribeURL;	// IMP=0x0010000000008776
- (_Bool)nss_isNewsTagURL;	// IMP=0x0010000000008764
- (_Bool)nss_hasRefreshParameter;	// IMP=0x001000000000845c
- (_Bool)nss_isNewsArticleVideoURL;	// IMP=0x001000000000844a
- (_Bool)nss_isNewsArticleURL;	// IMP=0x0010000000008438
- (_Bool)nss_isAudioURL;	// IMP=0x0010000000007b98
- (_Bool)nss_isStocksURL;	// IMP=0x0010000000007b86
- (_Bool)nss_isNewsURL;	// IMP=0x0010000000007b1c
@end
