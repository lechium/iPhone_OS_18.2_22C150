//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL, RequestLocalizations;

@interface ApprovalRequest : NSObject
{
    _Bool _canSendViaMessages;	// 8 = 0x8
    _Bool _mocked;	// 9 = 0x9
    NSDate *_date;	// 16 = 0x10
    NSString *_itemIdentifier;	// 24 = 0x18
    RequestLocalizations *_localizations;	// 32 = 0x20
    NSString *_requestIdentifier;	// 40 = 0x28
    long long _status;	// 48 = 0x30
    NSString *_uniqueIdentifier;	// 56 = 0x38
    NSDate *_createdDate;	// 64 = 0x40
    NSDate *_modifiedDate;	// 72 = 0x48
    NSString *_ageRating;	// 80 = 0x50
    NSString *_approverDSID;	// 88 = 0x58
    NSString *_itemTitle;	// 96 = 0x60
    NSString *_itemDescription;	// 104 = 0x68
    NSString *_localizedPrice;	// 112 = 0x70
    NSString *_itemBundleID;	// 120 = 0x78
    NSString *_offerName;	// 128 = 0x80
    NSURL *_previewURL;	// 136 = 0x88
    NSString *_productType;	// 144 = 0x90
    NSString *_productTypeName;	// 152 = 0x98
    NSURL *_productURL;	// 160 = 0xa0
    NSString *_thumbnailURLString;	// 168 = 0xa8
    NSString *_requesterName;	// 176 = 0xb0
    NSString *_requesterDSID;	// 184 = 0xb8
    NSDictionary *_requestInfo;	// 192 = 0xc0
    NSNumber *_starRating;	// 200 = 0xc8
    NSString *_requestString;	// 208 = 0xd0
    NSString *_requestSummary;	// 216 = 0xd8
    NSString *_priceSummary;	// 224 = 0xe0
}

+ (long long)lobForProductType:(id)arg1;	// IMP=0x002000000000947b
+ (long long)lobForSubscription:(id)arg1;	// IMP=0x001000000000937d
+ (id)createUniqueIDFromRequestID:(id)arg1 andCreatedDate:(id)arg2;	// IMP=0x0010000000008f51
- (void).cxx_destruct;	// IMP=0x0020000000009ea9
@property(readonly, nonatomic) NSString *priceSummary; // @synthesize priceSummary=_priceSummary;
@property(readonly, nonatomic) NSString *requestSummary; // @synthesize requestSummary=_requestSummary;
@property(readonly, nonatomic) NSString *requestString; // @synthesize requestString=_requestString;
@property(readonly, nonatomic) NSNumber *starRating; // @synthesize starRating=_starRating;
@property(readonly, nonatomic) NSDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(readonly, nonatomic) NSString *requesterDSID; // @synthesize requesterDSID=_requesterDSID;
@property(readonly, nonatomic) NSString *requesterName; // @synthesize requesterName=_requesterName;
@property(readonly, nonatomic) NSString *thumbnailURLString; // @synthesize thumbnailURLString=_thumbnailURLString;
@property(readonly, nonatomic) NSURL *productURL; // @synthesize productURL=_productURL;
@property(readonly, nonatomic) NSString *productTypeName; // @synthesize productTypeName=_productTypeName;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, nonatomic) NSString *offerName; // @synthesize offerName=_offerName;
@property(readonly, nonatomic, getter=isMocked) _Bool mocked; // @synthesize mocked=_mocked;
@property(readonly, nonatomic) NSString *itemBundleID; // @synthesize itemBundleID=_itemBundleID;
@property(readonly, nonatomic) NSString *localizedPrice; // @synthesize localizedPrice=_localizedPrice;
@property(readonly, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(readonly, nonatomic) _Bool canSendViaMessages; // @synthesize canSendViaMessages=_canSendViaMessages;
@property(readonly, nonatomic) NSString *approverDSID; // @synthesize approverDSID=_approverDSID;
@property(readonly, nonatomic) NSString *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) RequestLocalizations *localizations; // @synthesize localizations=_localizations;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy) NSString *description;
- (id)compile;	// IMP=0x00100000000095e6
- (long long)lineOfBusiness;	// IMP=0x00100000000092f8
- (id)metricsTopic;	// IMP=0x001000000000920c
- (id)metricsApp;	// IMP=0x001000000000912e
- (_Bool)isSubscription;	// IMP=0x00100000000090e3
- (void)updateStatus:(long long)arg1 withApproverDSID:(id)arg2;	// IMP=0x00100000000090ce
- (id)initWithCloudPushDictionary:(id)arg1 bag:(id)arg2;	// IMP=0x0010000000006d10
- (id)initWithCloudPushDictionary:(id)arg1;	// IMP=0x0010000000006c8f
- (id)initWithRequestStorageItem:(id)arg1;	// IMP=0x001000000000690d
- (id)initWithApproverStorageItem:(id)arg1;	// IMP=0x00100000000065d7
- (id)initWithApproverDSID:(id)arg1 createdDate:(id)arg2 modifiedDate:(id)arg3 requestIdentifier:(id)arg4 uniqueIdentifier:(id)arg5 canSendViaMessages:(_Bool)arg6 itemBundleID:(id)arg7 itemDescription:(id)arg8 itemIdentifier:(id)arg9 itemTitle:(id)arg10 localizations:(id)arg11 offerName:(id)arg12 mocked:(_Bool)arg13 previewURL:(id)arg14 productType:(id)arg15 productTypeName:(id)arg16 productURL:(id)arg17 requesterName:(id)arg18 requesterDSID:(id)arg19 requestInfo:(id)arg20 requestString:(id)arg21 requestSummary:(id)arg22 priceSummary:(id)arg23 status:(long long)arg24;	// IMP=0x0010000000006229
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000004def

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

