//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class CNDeliveryServiceItem, CNLogisticOnlineTouchSettingDTO, CNLogisticRealactItem, CNLogisticStationPredictItem, CNLogisticsBusinessChatItem, CNLogisticsDetailsTraceServiceItem, CNLogisticsIOTServiceItem, CNLogisticsOfficialAccountsItem, CNLogisticsStationInfoItem, NSString;

@interface CNExtPackageAttr : TBJSONModel
{
    _Bool _canRemindConsign;
    CNLogisticsDetailsTraceServiceItem *_TRACE_SERVICE;
    CNLogisticOnlineTouchSettingDTO *_OnlineTouchSettingDTO;
    CNLogisticsOfficialAccountsItem *_ACCOUNT_SERVICE;
    CNLogisticsBusinessChatItem *_BUSINESS_CHAT_SERVICE;
    CNLogisticsIOTServiceItem *_IOT_SERVICE;
    CNLogisticStationPredictItem *_STATION_PREDICT_SERVICE;
    CNLogisticRealactItem *_REALACT_SERVICE;
    CNDeliveryServiceItem *_TMALL_DELIVERY_SERVICE;
    CNLogisticsStationInfoItem *_STATION_DELIVERY_SERVICE;
    NSString *_serviceItemId;
}

@property(nonatomic) _Bool canRemindConsign; // @synthesize canRemindConsign=_canRemindConsign;
@property(retain, nonatomic) NSString *serviceItemId; // @synthesize serviceItemId=_serviceItemId;
@property(retain, nonatomic) CNLogisticsStationInfoItem *STATION_DELIVERY_SERVICE; // @synthesize STATION_DELIVERY_SERVICE=_STATION_DELIVERY_SERVICE;
@property(retain, nonatomic) CNDeliveryServiceItem *TMALL_DELIVERY_SERVICE; // @synthesize TMALL_DELIVERY_SERVICE=_TMALL_DELIVERY_SERVICE;
@property(retain, nonatomic) CNLogisticRealactItem *REALACT_SERVICE; // @synthesize REALACT_SERVICE=_REALACT_SERVICE;
@property(retain, nonatomic) CNLogisticStationPredictItem *STATION_PREDICT_SERVICE; // @synthesize STATION_PREDICT_SERVICE=_STATION_PREDICT_SERVICE;
@property(retain, nonatomic) CNLogisticsIOTServiceItem *IOT_SERVICE; // @synthesize IOT_SERVICE=_IOT_SERVICE;
@property(retain, nonatomic) CNLogisticsBusinessChatItem *BUSINESS_CHAT_SERVICE; // @synthesize BUSINESS_CHAT_SERVICE=_BUSINESS_CHAT_SERVICE;
@property(retain, nonatomic) CNLogisticsOfficialAccountsItem *ACCOUNT_SERVICE; // @synthesize ACCOUNT_SERVICE=_ACCOUNT_SERVICE;
@property(retain, nonatomic) CNLogisticOnlineTouchSettingDTO *OnlineTouchSettingDTO; // @synthesize OnlineTouchSettingDTO=_OnlineTouchSettingDTO;
@property(retain, nonatomic) CNLogisticsDetailsTraceServiceItem *TRACE_SERVICE; // @synthesize TRACE_SERVICE=_TRACE_SERVICE;
- (void).cxx_destruct;

@end

