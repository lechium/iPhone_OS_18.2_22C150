//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRKFileSystemNodeDescriptor, NSData, NSDictionary, NSString, NSURL;
@protocol CRKFileSystemNode;

@protocol CRKFileSystemNode
@property(readonly, copy, nonatomic) NSDictionary *children;
@property(readonly, copy, nonatomic) NSData *content;
@property(readonly, nonatomic) long long type;
@property(copy, nonatomic) NSString *fileName;
- (_Bool)writeToURL:(NSURL *)arg1 error:(id *)arg2;
- (void)removeFromParent;
- (id <CRKFileSystemNode>)addChildWithDescriptor:(CRKFileSystemNodeDescriptor *)arg1;
@end
