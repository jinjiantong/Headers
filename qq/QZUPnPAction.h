//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GDataXMLElement, NSString;

@interface QZUPnPAction : NSObject
{
    long long _serviceType;
    NSString *_name;
    GDataXMLElement *_xmlElement;
}

@property(retain, nonatomic) GDataXMLElement *xmlElement; // @synthesize xmlElement=_xmlElement;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;

@end

