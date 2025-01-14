//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, SPKQuery, SPKResponse;

@protocol SPKQueryDelegate
@property(retain) NSString *clientBundleID;
@property(retain) NSString *nlpQueryConfidence;
@property(retain) NSDictionary *nlpQueryCategoryPreference;
- (void)queryTask:(SPKQuery *)arg1 gotResponse:(SPKResponse *)arg2;
- (void)allowAnonymousDataCollection:(_Bool)arg1;
- (unsigned long long)queryIdent;
@end

