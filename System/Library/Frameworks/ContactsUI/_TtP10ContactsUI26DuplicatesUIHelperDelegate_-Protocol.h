//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactFormatter, CNContactStore, NSArray, _TtC10ContactsUI18DuplicatesUIHelper;

@protocol _TtP10ContactsUI26DuplicatesUIHelperDelegate_
- (void)didSelectUnignoreDuplicate:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1;
- (void)didSelectIgnoreAllDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1 signaturesIgnored:(NSArray *)arg2;
- (void)didSelectMergeAllDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1 signaturesToMerge:(NSArray *)arg2;
@property(nonatomic, readonly) CNContactStore *contactStore;
@property(nonatomic, readonly) CNContactFormatter *contactFormatter;

@optional
- (void)didSelectCancelMergeDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1;
@end
